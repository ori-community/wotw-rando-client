#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StreamingSoundsDisplay {
        namespace {
            app::StreamingSoundsDisplay__Class* type_info_ref = nullptr;
        }
        app::StreamingSoundsDisplay__Class** type_info = &type_info_ref;
        inline app::StreamingSoundsDisplay__Class* get_class() {
            return il2cpp::get_class<app::StreamingSoundsDisplay__Class>(type_info, "", "StreamingSoundsDisplay");
        }
        inline app::StreamingSoundsDisplay* create() {
            return il2cpp::create_object<app::StreamingSoundsDisplay>(get_class());
        }
    } // namespace StreamingSoundsDisplay
} // namespace app::classes::types
