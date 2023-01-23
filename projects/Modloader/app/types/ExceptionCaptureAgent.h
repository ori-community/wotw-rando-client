#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExceptionCaptureAgent__Class.h>
#include <Modloader/app/structs/ExceptionCaptureAgent.h>

namespace app::classes::types {
    namespace ExceptionCaptureAgent {
        inline app::ExceptionCaptureAgent__Class** type_info = (app::ExceptionCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04772CE8));
        inline app::ExceptionCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::ExceptionCaptureAgent__Class>(type_info, "", "ExceptionCaptureAgent");
        }
        inline app::ExceptionCaptureAgent* create() {
            return il2cpp::create_object<app::ExceptionCaptureAgent>(get_class());
        }
    } // namespace ExceptionCaptureAgent
} // namespace app::classes::types
