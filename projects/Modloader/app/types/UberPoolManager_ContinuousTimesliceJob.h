#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolManager_ContinuousTimesliceJob__Class.h>
#include <Modloader/app/structs/UberPoolManager_ContinuousTimesliceJob.h>

namespace app::classes::types {
    namespace UberPoolManager_ContinuousTimesliceJob {
        inline app::UberPoolManager_ContinuousTimesliceJob__Class** type_info = (app::UberPoolManager_ContinuousTimesliceJob__Class**)(modloader::win::memory::resolve_rva(0x04701F10));
        inline app::UberPoolManager_ContinuousTimesliceJob__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolManager_ContinuousTimesliceJob__Class>(type_info, "", "UberPoolManager", "ContinuousTimesliceJob");
        }
        inline app::UberPoolManager_ContinuousTimesliceJob* create() {
            return il2cpp::create_object<app::UberPoolManager_ContinuousTimesliceJob>(get_class());
        }
    } // namespace UberPoolManager_ContinuousTimesliceJob
} // namespace app::classes::types
