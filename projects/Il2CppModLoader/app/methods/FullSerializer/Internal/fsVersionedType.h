#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FullSerializer::Internal::fsVersionedType {
    IL2CPP_REGISTER_METHOD(0x0012BF80, app::Object*, Migrate, (app::fsVersionedType__Boxed * this_ptr, app::Object* ancestor_instance))
    IL2CPP_REGISTER_METHOD(0x0012BF90, app::String*, ToString, (app::fsVersionedType__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015047A0, bool, op_Equality, (app::fsVersionedType a, app::fsVersionedType b))
    IL2CPP_REGISTER_METHOD(0x01504860, bool, op_Inequality, (app::fsVersionedType a, app::fsVersionedType b))
    IL2CPP_REGISTER_METHOD(0x0012BFA0, bool, Equals, (app::fsVersionedType__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0012BFB0, int32_t, GetHashCode, (app::fsVersionedType__Boxed * this_ptr))
    inline bool operator==(app::fsVersionedType a, app::fsVersionedType b) {
        return op_Equality(a, b);
    }
    inline bool operator!=(app::fsVersionedType a, app::fsVersionedType b) {
        return op_Inequality(a, b);
    }
} // namespace app::classes::FullSerializer::Internal::fsVersionedType
