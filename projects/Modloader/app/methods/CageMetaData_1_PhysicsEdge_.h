#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CageMetaData_1_PhysicsEdge_ {
    IL2CPP_REGISTER_METHOD(0x019DD450, void, Add, (app::CageMetaData_1_PhysicsEdge_ * this_ptr, app::PhysicsEdge* data_entry, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x0477E070, CageMetaData_1_PhysicsEdge__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019DD7B0, app::PhysicsEdge*, FindByID, (app::CageMetaData_1_PhysicsEdge_ * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x0471BB00, CageMetaData_1_PhysicsEdge__FindByID__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019DD620, void, Remove, (app::CageMetaData_1_PhysicsEdge_ * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHODINFO(0x047554C0, CageMetaData_1_PhysicsEdge__Remove__MethodInfo)
} // namespace app::classes::CageMetaData_1_PhysicsEdge_
