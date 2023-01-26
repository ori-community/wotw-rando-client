#pragma once
#include <Modloader/app/structs/RegexRunner.h>
#include <Modloader/app/structs/RegexRunner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexRunner {
        inline app::RegexRunner__Class** type_info() {
            static app::RegexRunner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexRunner__Class**)(modloader::win::memory::resolve_rva(0x0474D630));
            }
            return cache;
        }
        inline app::RegexRunner__Class* get_class() {
            return il2cpp::get_class<app::RegexRunner__Class>(type_info(), "System.Text.RegularExpressions", "RegexRunner");
        }
        inline app::RegexRunner* create() {
            return il2cpp::create_object<app::RegexRunner>(get_class());
        }
    } // namespace RegexRunner
} // namespace app::classes::types
