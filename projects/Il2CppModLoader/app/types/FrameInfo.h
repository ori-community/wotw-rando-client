#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrameInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FrameInfo__Class** type_info;
        inline app::FrameInfo__Class* get_class() {
            return il2cpp::get_class<app::FrameInfo__Class>(type_info, "", "FrameInfo");
        }
        inline app::FrameInfo* create() {
            return il2cpp::create_object<app::FrameInfo>(get_class());
        }
        inline app::FrameInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FrameInfo__Array>(get_class(), size);
        }
        inline app::FrameInfo__Array* create_array(const std::vector<app::FrameInfo*>& items) {
            return il2cpp::array_new<app::FrameInfo__Array>(get_class(), items);
        }
    } // namespace FrameInfo
} // namespace app::classes::types
