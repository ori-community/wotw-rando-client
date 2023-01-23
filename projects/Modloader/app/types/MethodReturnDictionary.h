#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MethodReturnDictionary__Class.h>
#include <Modloader/app/structs/MethodReturnDictionary.h>

namespace app::classes::types {
    namespace MethodReturnDictionary {
        inline app::MethodReturnDictionary__Class** type_info = (app::MethodReturnDictionary__Class**)(modloader::win::memory::resolve_rva(0x04717D60));
        inline app::MethodReturnDictionary__Class* get_class() {
            return il2cpp::get_class<app::MethodReturnDictionary__Class>(type_info, "System.Runtime.Remoting.Messaging", "MethodReturnDictionary");
        }
        inline app::MethodReturnDictionary* create() {
            return il2cpp::create_object<app::MethodReturnDictionary>(get_class());
        }
    } // namespace MethodReturnDictionary
} // namespace app::classes::types
