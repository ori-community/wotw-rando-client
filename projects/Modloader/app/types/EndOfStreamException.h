#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EndOfStreamException__Class.h>
#include <Modloader/app/structs/EndOfStreamException.h>

namespace app::classes::types {
    namespace EndOfStreamException {
        inline app::EndOfStreamException__Class** type_info = (app::EndOfStreamException__Class**)(modloader::win::memory::resolve_rva(0x04731350));
        inline app::EndOfStreamException__Class* get_class() {
            return il2cpp::get_class<app::EndOfStreamException__Class>(type_info, "System.IO", "EndOfStreamException");
        }
        inline app::EndOfStreamException* create() {
            return il2cpp::create_object<app::EndOfStreamException>(get_class());
        }
    } // namespace EndOfStreamException
} // namespace app::classes::types
