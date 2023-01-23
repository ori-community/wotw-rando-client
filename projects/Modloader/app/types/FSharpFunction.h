#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FSharpFunction__Class.h>
#include <Modloader/app/structs/FSharpFunction.h>

namespace app::classes::types {
    namespace FSharpFunction {
        inline app::FSharpFunction__Class** type_info = (app::FSharpFunction__Class**)(modloader::win::memory::resolve_rva(0x04763618));
        inline app::FSharpFunction__Class* get_class() {
            return il2cpp::get_class<app::FSharpFunction__Class>(type_info, "Newtonsoft.Json.Utilities", "FSharpFunction");
        }
        inline app::FSharpFunction* create() {
            return il2cpp::create_object<app::FSharpFunction>(get_class());
        }
    } // namespace FSharpFunction
} // namespace app::classes::types
