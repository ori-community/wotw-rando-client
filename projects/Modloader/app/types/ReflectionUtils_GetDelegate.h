#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionUtils_GetDelegate__Class.h>
#include <Modloader/app/structs/ReflectionUtils_GetDelegate.h>
#include <Modloader/app/structs/ReflectionUtils_GetDelegate__Array.h>

namespace app::classes::types {
    namespace ReflectionUtils_GetDelegate {
        inline app::ReflectionUtils_GetDelegate__Class** type_info = (app::ReflectionUtils_GetDelegate__Class**)(modloader::win::memory::resolve_rva(0x04774DB8));
        inline app::ReflectionUtils_GetDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_GetDelegate__Class>(type_info, "PlayFab.Json", "ReflectionUtils", "GetDelegate");
        }
        inline app::ReflectionUtils_GetDelegate* create() {
            return il2cpp::create_object<app::ReflectionUtils_GetDelegate>(get_class());
        }
        inline app::ReflectionUtils_GetDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::ReflectionUtils_GetDelegate__Array>(get_class(), size);
        }
        inline app::ReflectionUtils_GetDelegate__Array* create_array(const std::vector<app::ReflectionUtils_GetDelegate*>& items) {
            return il2cpp::array_new<app::ReflectionUtils_GetDelegate__Array>(get_class(), items);
        }
    } // namespace ReflectionUtils_GetDelegate
} // namespace app::classes::types
