#pragma once
#include <Modloader/app/structs/FSharpFunction.h>
#include <Modloader/app/structs/FSharpFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FSharpFunction {
        inline app::FSharpFunction__Class** type_info() {
            static app::FSharpFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FSharpFunction__Class**)(modloader::win::memory::resolve_rva(0x04763618));
            }
            return cache;
        }
        inline app::FSharpFunction__Class* get_class() {
            return il2cpp::get_class<app::FSharpFunction__Class>(type_info(), "Newtonsoft.Json.Utilities", "FSharpFunction");
        }
        inline app::FSharpFunction* create() {
            return il2cpp::create_object<app::FSharpFunction>(get_class());
        }
    } // namespace FSharpFunction
} // namespace app::classes::types
