#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::CrossSceneReferenceId {
    IL2CPP_REGISTER_METHOD(0x00114150, int32_t, get_ObjectId, (app::CrossSceneReferenceId__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024B800, bool, IsFromSameScene, (app::CrossSceneReferenceId__Boxed * this_ptr, app::CrossSceneReferenceId other))
    IL2CPP_REGISTER_METHOD(0x0024B850, void, ctor, (app::CrossSceneReferenceId__Boxed * this_ptr, app::String* scene_guid_string, int32_t object_id))
    IL2CPP_REGISTER_METHOD(0x0024B970, bool, Equals_1, (app::CrossSceneReferenceId__Boxed * this_ptr, app::CrossSceneReferenceId other))
    IL2CPP_REGISTER_METHOD(0x0024B9D0, bool, Equals_2, (app::CrossSceneReferenceId__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0024B9E0, int32_t, GetHashCode, (app::CrossSceneReferenceId__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BADB0, bool, op_Equality, (app::CrossSceneReferenceId left, app::CrossSceneReferenceId right))
    IL2CPP_REGISTER_METHOD(0x031BAE10, bool, op_Inequality, (app::CrossSceneReferenceId left, app::CrossSceneReferenceId right))
    IL2CPP_REGISTER_METHOD(0x031BAE70, app::IEqualityComparer_1_Moon_CrossSceneReferenceId_*, get_CrossSceneReferenceIdComparer, ())
    IL2CPP_REGISTER_METHOD(0x031BAF10, void, cctor, ())
    inline bool operator==(app::CrossSceneReferenceId left, app::CrossSceneReferenceId right) {
        return op_Equality(left, right);
    }
    inline bool operator!=(app::CrossSceneReferenceId left, app::CrossSceneReferenceId right) {
        return op_Inequality(left, right);
    }
} // namespace app::classes::Moon::CrossSceneReferenceId
