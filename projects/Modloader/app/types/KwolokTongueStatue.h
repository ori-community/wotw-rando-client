#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokTongueStatue__Class.h>
#include <Modloader/app/structs/KwolokTongueStatue.h>

namespace app::classes::types {
    namespace KwolokTongueStatue {
        namespace {
            inline app::KwolokTongueStatue__Class* type_info_ref = nullptr;
        }
        inline app::KwolokTongueStatue__Class** type_info = &type_info_ref;
        inline app::KwolokTongueStatue__Class* get_class() {
            return il2cpp::get_class<app::KwolokTongueStatue__Class>(type_info, "", "KwolokTongueStatue");
        }
        inline app::KwolokTongueStatue* create() {
            return il2cpp::create_object<app::KwolokTongueStatue>(get_class());
        }
    } // namespace KwolokTongueStatue
} // namespace app::classes::types
