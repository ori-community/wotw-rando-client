#pragma once
#include <Modloader/app/structs/CodePointIndexer_TableRange.h>
#include <Modloader/app/structs/CodePointIndexer_TableRange__Array.h>
#include <Modloader/app/structs/CodePointIndexer_TableRange__Boxed.h>
#include <Modloader/app/structs/CodePointIndexer_TableRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CodePointIndexer_TableRange {
        inline app::CodePointIndexer_TableRange__Class** type_info() {
            static app::CodePointIndexer_TableRange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CodePointIndexer_TableRange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CodePointIndexer_TableRange__Class* get_class() {
            return il2cpp::get_nested_class<app::CodePointIndexer_TableRange__Class>(type_info(), "Mono.Globalization.Unicode", "CodePointIndexer", "TableRange");
        }
        inline app::CodePointIndexer_TableRange* create() {
            return il2cpp::create_object<app::CodePointIndexer_TableRange>(get_class());
        }
        inline app::CodePointIndexer_TableRange__Boxed* box(app::CodePointIndexer_TableRange value) {
            return il2cpp::box_value<app::CodePointIndexer_TableRange__Boxed>(get_class(), value);
        }
        inline app::CodePointIndexer_TableRange__Array* create_array(int size) {
            return il2cpp::array_new<app::CodePointIndexer_TableRange__Array>(get_class(), size);
        }
        inline app::CodePointIndexer_TableRange__Array* create_array(const std::vector<app::CodePointIndexer_TableRange>& items) {
            return il2cpp::array_new<app::CodePointIndexer_TableRange__Array>(get_class(), items);
        }
    } // namespace CodePointIndexer_TableRange
} // namespace app::classes::types
