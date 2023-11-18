#pragma once
#include <Modloader/app/structs/XalTraceLevel__Enum.h>
#include <Modloader/app/structs/XalTraceLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalTraceLevel__Enum {
        inline app::XalTraceLevel__Enum__Class** type_info() {
            static app::XalTraceLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalTraceLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471B428));
            }
            return cache;
        }
        inline app::XalTraceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalTraceLevel__Enum__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalTraceLevel");
        }
        inline app::XalTraceLevel__Enum* create() {
            return il2cpp::create_object<app::XalTraceLevel__Enum>(get_class());
        }
    } // namespace XalTraceLevel__Enum
} // namespace app::classes::types
