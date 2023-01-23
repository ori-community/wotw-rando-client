#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListDictionaryInternal__Class.h>
#include <Modloader/app/structs/ListDictionaryInternal.h>

namespace app::classes::types {
    namespace ListDictionaryInternal {
        inline app::ListDictionaryInternal__Class** type_info = (app::ListDictionaryInternal__Class**)(modloader::win::memory::resolve_rva(0x04721D68));
        inline app::ListDictionaryInternal__Class* get_class() {
            return il2cpp::get_class<app::ListDictionaryInternal__Class>(type_info, "System.Collections", "ListDictionaryInternal");
        }
        inline app::ListDictionaryInternal* create() {
            return il2cpp::create_object<app::ListDictionaryInternal>(get_class());
        }
    } // namespace ListDictionaryInternal
} // namespace app::classes::types
