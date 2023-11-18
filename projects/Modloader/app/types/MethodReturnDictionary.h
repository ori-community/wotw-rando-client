#pragma once
#include <Modloader/app/structs/MethodReturnDictionary.h>
#include <Modloader/app/structs/MethodReturnDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodReturnDictionary {
        inline app::MethodReturnDictionary__Class** type_info() {
            static app::MethodReturnDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodReturnDictionary__Class**)(modloader::win::memory::resolve_rva(0x04717D60));
            }
            return cache;
        }
        inline app::MethodReturnDictionary__Class* get_class() {
            return il2cpp::get_class<app::MethodReturnDictionary__Class>(type_info(), "System.Runtime.Remoting.Messaging", "MethodReturnDictionary");
        }
        inline app::MethodReturnDictionary* create() {
            return il2cpp::create_object<app::MethodReturnDictionary>(get_class());
        }
    } // namespace MethodReturnDictionary
} // namespace app::classes::types
