#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCTextModifier {
        namespace {
            app::CCTextModifier__Class* type_info_ref = nullptr;
        }
        app::CCTextModifier__Class** type_info = &type_info_ref;
        inline app::CCTextModifier__Class* get_class() {
            return il2cpp::get_class<app::CCTextModifier__Class>(type_info, "", "CCTextModifier");
        }
        inline app::CCTextModifier* create() {
            return il2cpp::create_object<app::CCTextModifier>(get_class());
        }
        inline app::CCTextModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::CCTextModifier__Array>(get_class(), size);
        }
    } // namespace CCTextModifier
} // namespace app::classes::types
