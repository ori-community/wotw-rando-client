#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/UberShaderDictionary_2_System_String_System_Int32_.h>

namespace app::classes::UberShaderDictionary_2_System_String_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0225DBC0, void, ctor, app::UberShaderDictionary_2_System_String_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225DEB0, void, OnBeforeSerialize, app::UberShaderDictionary_2_System_String_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225E170, void, OnAfterDeserialize, app::UberShaderDictionary_2_System_String_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0225D800,
        app::IEnumerator_1_KeyValuePair_2_System_String_System_Int32_*,
        System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator,
        app::UberShaderDictionary_2_System_String_System_Int32_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0225D800, app::IEnumerator*, IEnumerable_GetEnumerator, app::UberShaderDictionary_2_System_String_System_Int32_* this_ptr)
} // namespace app::classes::UberShaderDictionary_2_System_String_System_Int32_
