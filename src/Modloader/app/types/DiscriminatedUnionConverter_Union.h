#pragma once
#include <Modloader/app/structs/DiscriminatedUnionConverter_Union.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_Union__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DiscriminatedUnionConverter_Union {
        inline app::DiscriminatedUnionConverter_Union__Class** type_info() {
            static app::DiscriminatedUnionConverter_Union__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DiscriminatedUnionConverter_Union__Class**)(modloader::win::memory::resolve_rva(0x04716BC8));
            }
            return cache;
        }
        inline app::DiscriminatedUnionConverter_Union__Class* get_class() {
            return il2cpp::get_nested_class<app::DiscriminatedUnionConverter_Union__Class>(type_info(), "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter", "Union");
        }
        inline app::DiscriminatedUnionConverter_Union* create() {
            return il2cpp::create_object<app::DiscriminatedUnionConverter_Union>(get_class());
        }
    } // namespace DiscriminatedUnionConverter_Union
} // namespace app::classes::types
