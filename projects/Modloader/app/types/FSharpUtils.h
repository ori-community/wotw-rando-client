#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FSharpUtils__Class.h>
#include <Modloader/app/structs/FSharpUtils.h>

namespace app::classes::types {
    namespace FSharpUtils {
        inline app::FSharpUtils__Class** type_info = (app::FSharpUtils__Class**)(modloader::win::memory::resolve_rva(0x0474E980));
        inline app::FSharpUtils__Class* get_class() {
            return il2cpp::get_class<app::FSharpUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "FSharpUtils");
        }
        inline app::FSharpUtils* create() {
            return il2cpp::create_object<app::FSharpUtils>(get_class());
        }
    } // namespace FSharpUtils
} // namespace app::classes::types
