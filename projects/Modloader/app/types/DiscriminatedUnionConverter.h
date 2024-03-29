#pragma once
#include <Modloader/app/structs/DiscriminatedUnionConverter.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DiscriminatedUnionConverter {
        inline app::DiscriminatedUnionConverter__Class** type_info() {
            static app::DiscriminatedUnionConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DiscriminatedUnionConverter__Class**)(modloader::win::memory::resolve_rva(0x04716A20));
            }
            return cache;
        }
        inline app::DiscriminatedUnionConverter__Class* get_class() {
            return il2cpp::get_class<app::DiscriminatedUnionConverter__Class>(type_info(), "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter");
        }
        inline app::DiscriminatedUnionConverter* create() {
            return il2cpp::create_object<app::DiscriminatedUnionConverter>(get_class());
        }
    } // namespace DiscriminatedUnionConverter
} // namespace app::classes::types
