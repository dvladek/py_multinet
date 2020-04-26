
#ifndef UU_MULTINET_PYEVOLUTIONMODEL_H_
#define UU_MULTINET_PYEVOLUTIONMODEL_H_

#include "networks/AttributedHomogeneousMultilayerNetwork.hpp"
#include "generation/EvolutionModel.hpp"
#include <memory>
#include <string>

class PyEvolutionModel
{
private:
    std::shared_ptr<uu::net::EvolutionModel<uu::net::AttributedHomogeneousMultilayerNetwork>> ptr;
    std::string desc;
    
public:
    std::string
    description(
    ) const
    {
        return desc;
    }
    
    PyEvolutionModel(
                    std::shared_ptr<uu::net::EvolutionModel<uu::net::AttributedHomogeneousMultilayerNetwork>> ptr,
                    const std::string& description
                    ) : ptr(ptr), desc(description) {}
    
    uu::net::EvolutionModel<uu::net::AttributedHomogeneousMultilayerNetwork>*
    get_model() const
    {
        return ptr.get();
    }
};

#endif
