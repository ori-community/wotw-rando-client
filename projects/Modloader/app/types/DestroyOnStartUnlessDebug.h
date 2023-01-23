#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DestroyOnStartUnlessDebug__Class.h>
#include <Modloader/app/structs/DestroyOnStartUnlessDebug.h>

namespace app::classes::types {
    namespace DestroyOnStartUnlessDebug {
        namespace {
            inline app::DestroyOnStartUnlessDebug__Class* type_info_ref = nullptr;
        }
        inline app::DestroyOnStartUnlessDebug__Class** type_info = &type_info_ref;
        inline app::DestroyOnStartUnlessDebug__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnStartUnlessDebug__Class>(type_info, "", "DestroyOnStartUnlessDebug");
        }
        inline app::DestroyOnStartUnlessDebug* create() {
            return il2cpp::create_object<app::DestroyOnStartUnlessDebug>(get_class());
        }
    } // namespace DestroyOnStartUnlessDebug
} // namespace app::classes::types
