#pragma once
#include <Modloader/app/structs/RegexCharClass_SingleRangeComparer.h>
#include <Modloader/app/structs/RegexCharClass_SingleRangeComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexCharClass_SingleRangeComparer {
        inline app::RegexCharClass_SingleRangeComparer__Class** type_info() {
            static app::RegexCharClass_SingleRangeComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexCharClass_SingleRangeComparer__Class**)(modloader::win::memory::resolve_rva(0x0470E680));
            }
            return cache;
        }
        inline app::RegexCharClass_SingleRangeComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::RegexCharClass_SingleRangeComparer__Class>(type_info(), "System.Text.RegularExpressions", "RegexCharClass", "SingleRangeComparer");
        }
        inline app::RegexCharClass_SingleRangeComparer* create() {
            return il2cpp::create_object<app::RegexCharClass_SingleRangeComparer>(get_class());
        }
    } // namespace RegexCharClass_SingleRangeComparer
} // namespace app::classes::types
