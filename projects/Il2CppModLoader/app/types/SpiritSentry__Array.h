#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritSentry__Array {
        namespace {
            app::SpiritSentry__Array__Class* type_info_ref = nullptr;
        }
        app::SpiritSentry__Array__Class** type_info = &type_info_ref;
        inline app::SpiritSentry__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritSentry__Array__Class>(type_info, "", "SpiritSentry[]");
        }
        inline app::SpiritSentry__Array* create() {
            return il2cpp::create_object<app::SpiritSentry__Array>(get_class());
        }
    } // namespace SpiritSentry__Array
} // namespace app::classes::types
