#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InterpretedFrameInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InterpretedFrameInfo__Class** type_info;
        inline app::InterpretedFrameInfo__Class* get_class() {
            return il2cpp::get_class<app::InterpretedFrameInfo__Class>(type_info, "System.Linq.Expressions.Interpreter", "InterpretedFrameInfo");
        }
        inline app::InterpretedFrameInfo* create() {
            return il2cpp::create_object<app::InterpretedFrameInfo>(get_class());
        }
        inline app::InterpretedFrameInfo__Boxed* box(app::InterpretedFrameInfo value) {
            return il2cpp::box_value<app::InterpretedFrameInfo__Boxed>(get_class(), value);
        }
        inline app::InterpretedFrameInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::InterpretedFrameInfo__Array>(get_class(), size);
        }
        inline app::InterpretedFrameInfo__Array* create_array(const std::vector<app::InterpretedFrameInfo__Boxed>& items) {
            return il2cpp::array_new<app::InterpretedFrameInfo__Array>(get_class(), items);
        }
    } // namespace InterpretedFrameInfo
} // namespace app::classes::types
