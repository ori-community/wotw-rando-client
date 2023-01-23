#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MD4__Class.h>
#include <Modloader/app/structs/MD4.h>

namespace app::classes::types {
    namespace MD4 {
        namespace {
            inline app::MD4__Class* type_info_ref = nullptr;
        }
        inline app::MD4__Class** type_info = &type_info_ref;
        inline app::MD4__Class* get_class() {
            return il2cpp::get_class<app::MD4__Class>(type_info, "Mono.Security.Cryptography", "MD4");
        }
        inline app::MD4* create() {
            return il2cpp::create_object<app::MD4>(get_class());
        }
    } // namespace MD4
} // namespace app::classes::types
