#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EmptyReadOnlyDictionaryInternal__Class.h>
#include <Modloader/app/structs/EmptyReadOnlyDictionaryInternal.h>

namespace app::classes::types {
    namespace EmptyReadOnlyDictionaryInternal {
        inline app::EmptyReadOnlyDictionaryInternal__Class** type_info = (app::EmptyReadOnlyDictionaryInternal__Class**)(modloader::win::memory::resolve_rva(0x04792508));
        inline app::EmptyReadOnlyDictionaryInternal__Class* get_class() {
            return il2cpp::get_class<app::EmptyReadOnlyDictionaryInternal__Class>(type_info, "System.Collections", "EmptyReadOnlyDictionaryInternal");
        }
        inline app::EmptyReadOnlyDictionaryInternal* create() {
            return il2cpp::create_object<app::EmptyReadOnlyDictionaryInternal>(get_class());
        }
    } // namespace EmptyReadOnlyDictionaryInternal
} // namespace app::classes::types
