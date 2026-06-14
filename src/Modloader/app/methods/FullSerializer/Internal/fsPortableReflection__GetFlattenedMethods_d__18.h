#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Reflection_MethodInfo_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/fsPortableReflection_GetFlattenedMethods_d_18.h>

namespace app::classes::FullSerializer::Internal::fsPortableReflection__GetFlattenedMethods_d__18 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::fsPortableReflection_GetFlattenedMethods_d_18* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::fsPortableReflection_GetFlattenedMethods_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0165AC20, bool, MoveNext, app::fsPortableReflection_GetFlattenedMethods_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MethodInfo_1*, IEnumerator_MethodInfo__get_Current, app::fsPortableReflection_GetFlattenedMethods_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0165AE70, void, IEnumerator_Reset, app::fsPortableReflection_GetFlattenedMethods_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::fsPortableReflection_GetFlattenedMethods_d_18* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0165AEC0,
        app::IEnumerator_1_System_Reflection_MethodInfo_*,
        IEnumerable_MethodInfo__GetEnumerator,
        app::fsPortableReflection_GetFlattenedMethods_d_18* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0165B0C0, app::IEnumerator*, IEnumerable_GetEnumerator, app::fsPortableReflection_GetFlattenedMethods_d_18* this_ptr)
} // namespace app::classes::FullSerializer::Internal::fsPortableReflection__GetFlattenedMethods_d__18
