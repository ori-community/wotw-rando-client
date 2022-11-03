#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextSpawner {
        namespace {
            inline app::TextSpawner__Class* type_info_ref = nullptr;
        }
        inline app::TextSpawner__Class** type_info = &type_info_ref;
        inline app::TextSpawner__Class* get_class() {
            return il2cpp::get_class<app::TextSpawner__Class>(type_info, "", "TextSpawner");
        }
        inline app::TextSpawner* create() {
            return il2cpp::create_object<app::TextSpawner>(get_class());
        }
    } // namespace TextSpawner
} // namespace app::classes::types
