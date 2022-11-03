#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokNpcEntity {
        namespace {
            inline app::KwolokNpcEntity__Class* type_info_ref = nullptr;
        }
        inline app::KwolokNpcEntity__Class** type_info = &type_info_ref;
        inline app::KwolokNpcEntity__Class* get_class() {
            return il2cpp::get_class<app::KwolokNpcEntity__Class>(type_info, "", "KwolokNpcEntity");
        }
        inline app::KwolokNpcEntity* create() {
            return il2cpp::create_object<app::KwolokNpcEntity>(get_class());
        }
    } // namespace KwolokNpcEntity
} // namespace app::classes::types
