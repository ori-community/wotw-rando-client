#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageMetaData_1_PhysicsEdge_.h>
#include <Modloader/app/structs/PhysicsEdge.h>

namespace app::classes::CageMetaData_1_PhysicsEdge_ {
    IL2CPP_REGISTER_METHOD(0x019DD450, void, Add, app::CageMetaData_1_PhysicsEdge_* this_ptr, app::PhysicsEdge* data_entry, int32_t id)
    IL2CPP_REGISTER_METHOD(0x019DD7B0, app::PhysicsEdge*, FindByID, app::CageMetaData_1_PhysicsEdge_* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x019DD620, void, Remove, app::CageMetaData_1_PhysicsEdge_* this_ptr, int32_t id)
} // namespace app::classes::CageMetaData_1_PhysicsEdge_
