#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionDelegateFactory__Class.h>
#include <Modloader/app/structs/ReflectionDelegateFactory.h>

namespace app::classes::types {
    namespace ReflectionDelegateFactory {
        namespace {
            inline app::ReflectionDelegateFactory__Class* type_info_ref = nullptr;
        }
        inline app::ReflectionDelegateFactory__Class** type_info = &type_info_ref;
        inline app::ReflectionDelegateFactory__Class* get_class() {
            return il2cpp::get_class<app::ReflectionDelegateFactory__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionDelegateFactory");
        }
        inline app::ReflectionDelegateFactory* create() {
            return il2cpp::create_object<app::ReflectionDelegateFactory>(get_class());
        }
    } // namespace ReflectionDelegateFactory
} // namespace app::classes::types
