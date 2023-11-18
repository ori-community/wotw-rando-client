#pragma once
#include <Modloader/app/structs/fsDictionaryConverter.h>
#include <Modloader/app/structs/fsDictionaryConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsDictionaryConverter {
        inline app::fsDictionaryConverter__Class** type_info() {
            static app::fsDictionaryConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsDictionaryConverter__Class**)(modloader::win::memory::resolve_rva(0x047996A0));
            }
            return cache;
        }
        inline app::fsDictionaryConverter__Class* get_class() {
            return il2cpp::get_class<app::fsDictionaryConverter__Class>(type_info(), "FullSerializer.Internal", "fsDictionaryConverter");
        }
        inline app::fsDictionaryConverter* create() {
            return il2cpp::create_object<app::fsDictionaryConverter>(get_class());
        }
    } // namespace fsDictionaryConverter
} // namespace app::classes::types
