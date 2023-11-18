#pragma once
#include <Modloader/app/structs/MonoAssemblyName_public_key_token_e_FixedBuffer.h>
#include <Modloader/app/structs/MonoAssemblyName_public_key_token_e_FixedBuffer__Boxed.h>
#include <Modloader/app/structs/MonoAssemblyName_public_key_token_e_FixedBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoAssemblyName_public_key_token_e_FixedBuffer {
        inline app::MonoAssemblyName_public_key_token_e_FixedBuffer__Class** type_info() {
            static app::MonoAssemblyName_public_key_token_e_FixedBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoAssemblyName_public_key_token_e_FixedBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoAssemblyName_public_key_token_e_FixedBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::MonoAssemblyName_public_key_token_e_FixedBuffer__Class>(type_info(), "Mono", "MonoAssemblyName", "<public_key_token>e__FixedBuffer");
        }
        inline app::MonoAssemblyName_public_key_token_e_FixedBuffer* create() {
            return il2cpp::create_object<app::MonoAssemblyName_public_key_token_e_FixedBuffer>(get_class());
        }
        inline app::MonoAssemblyName_public_key_token_e_FixedBuffer__Boxed* box(app::MonoAssemblyName_public_key_token_e_FixedBuffer value) {
            return il2cpp::box_value<app::MonoAssemblyName_public_key_token_e_FixedBuffer__Boxed>(get_class(), value);
        }
    } // namespace MonoAssemblyName_public_key_token_e_FixedBuffer
} // namespace app::classes::types
