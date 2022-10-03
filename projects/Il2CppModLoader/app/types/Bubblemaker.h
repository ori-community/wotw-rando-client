#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Bubblemaker {
        namespace {
            app::Bubblemaker__Class* type_info_ref = nullptr;
        }
        app::Bubblemaker__Class** type_info = &type_info_ref;
        inline app::Bubblemaker__Class* get_class() {
            return il2cpp::get_class<app::Bubblemaker__Class>(type_info, "", "Bubblemaker");
        }
        inline app::Bubblemaker* create() {
            return il2cpp::create_object<app::Bubblemaker>(get_class());
        }
    } // namespace Bubblemaker
} // namespace app::classes::types
