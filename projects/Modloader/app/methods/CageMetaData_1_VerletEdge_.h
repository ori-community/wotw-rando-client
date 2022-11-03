#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CageMetaData_1_VerletEdge_ {
    IL2CPP_REGISTER_METHOD(0x019DD450, void, Add, (app::CageMetaData_1_VerletEdge_ * this_ptr, app::VerletEdge* data_entry, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x0470B190, CageMetaData_1_VerletEdge__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019DD7B0, app::VerletEdge*, FindByID, (app::CageMetaData_1_VerletEdge_ * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x04791580, CageMetaData_1_VerletEdge__FindByID__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019DD620, void, Remove, (app::CageMetaData_1_VerletEdge_ * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x047392E8, CageMetaData_1_VerletEdge__Remove__MethodInfo)
} // namespace app::classes::CageMetaData_1_VerletEdge_
