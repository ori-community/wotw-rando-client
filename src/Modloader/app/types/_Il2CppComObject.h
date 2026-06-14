#pragma once
#include <Modloader/app/structs/_Il2CppComObject.h>
#include <Modloader/app/structs/_Il2CppComObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _Il2CppComObject {
        inline app::_Il2CppComObject__Class** type_info() {
            static app::_Il2CppComObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::_Il2CppComObject__Class**)(modloader::win::memory::resolve_rva(0x047356A0));
            }
            return cache;
        }
        inline app::_Il2CppComObject__Class* get_class() {
            return il2cpp::get_class<app::_Il2CppComObject__Class>(type_info(), "System", "__Il2CppComObject");
        }
        inline app::_Il2CppComObject* create() {
            return il2cpp::create_object<app::_Il2CppComObject>(get_class());
        }
    } // namespace _Il2CppComObject
} // namespace app::classes::types
