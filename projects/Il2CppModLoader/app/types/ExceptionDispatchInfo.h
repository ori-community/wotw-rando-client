#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionDispatchInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionDispatchInfo__Class** type_info;
        inline app::ExceptionDispatchInfo__Class* get_class() {
            return il2cpp::get_class<app::ExceptionDispatchInfo__Class>(type_info, "System.Runtime.ExceptionServices", "ExceptionDispatchInfo");
        }
        inline app::ExceptionDispatchInfo* create() {
            return il2cpp::create_object<app::ExceptionDispatchInfo>(get_class());
        }
        inline app::ExceptionDispatchInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ExceptionDispatchInfo__Array>(get_class(), size);
        }
        inline app::ExceptionDispatchInfo__Array* create_array(const std::vector<app::ExceptionDispatchInfo*>& items) {
            return il2cpp::array_new<app::ExceptionDispatchInfo__Array>(get_class(), items);
        }
    } // namespace ExceptionDispatchInfo
} // namespace app::classes::types
