#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CageVertexMetaData_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019DE6D0, void, OnEnable, (app::CageVertexMetaData_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019DEB30, void, OnDisable, (app::CageVertexMetaData_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAddVertex, (app::CageVertexMetaData_1_System_Object_ * this_ptr, app::CageStructureTool_Vertex* vertex))
    IL2CPP_REGISTER_METHOD(0x019DEF50, void, OnRemoveVertex, (app::CageVertexMetaData_1_System_Object_ * this_ptr, app::CageStructureTool_Vertex* vertex))
    IL2CPP_REGISTER_METHOD(0x019DEF90, app::Object*, GetMetaData, (app::CageVertexMetaData_1_System_Object_ * this_ptr, app::CageStructureTool_Vertex* vertex))
    IL2CPP_REGISTER_METHOD(0x019DF0B0, void, CompleteMetadata, (app::CageVertexMetaData_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019DF3A0, void, ctor, (app::CageVertexMetaData_1_System_Object_ * this_ptr))
} // namespace app::classes::CageVertexMetaData_1_System_Object_
