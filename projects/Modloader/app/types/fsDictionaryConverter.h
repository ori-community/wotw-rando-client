#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsDictionaryConverter__Class.h>
#include <Modloader/app/structs/fsDictionaryConverter.h>

namespace app::classes::types {
    namespace fsDictionaryConverter {
        inline app::fsDictionaryConverter__Class** type_info = (app::fsDictionaryConverter__Class**)(modloader::win::memory::resolve_rva(0x047996A0));
        inline app::fsDictionaryConverter__Class* get_class() {
            return il2cpp::get_class<app::fsDictionaryConverter__Class>(type_info, "FullSerializer.Internal", "fsDictionaryConverter");
        }
        inline app::fsDictionaryConverter* create() {
            return il2cpp::create_object<app::fsDictionaryConverter>(get_class());
        }
    } // namespace fsDictionaryConverter
} // namespace app::classes::types
