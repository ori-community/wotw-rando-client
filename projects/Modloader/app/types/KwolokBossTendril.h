#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossTendril__Class.h>
#include <Modloader/app/structs/KwolokBossTendril.h>

namespace app::classes::types {
    namespace KwolokBossTendril {
        namespace {
            inline app::KwolokBossTendril__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossTendril__Class** type_info = &type_info_ref;
        inline app::KwolokBossTendril__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossTendril__Class>(type_info, "", "KwolokBossTendril");
        }
        inline app::KwolokBossTendril* create() {
            return il2cpp::create_object<app::KwolokBossTendril>(get_class());
        }
    } // namespace KwolokBossTendril
} // namespace app::classes::types
