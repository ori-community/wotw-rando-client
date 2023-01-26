#pragma once
#include <Modloader/app/structs/FtpRequestCreator.h>
#include <Modloader/app/structs/FtpRequestCreator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FtpRequestCreator {
        inline app::FtpRequestCreator__Class** type_info() {
            static app::FtpRequestCreator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FtpRequestCreator__Class**)(modloader::win::memory::resolve_rva(0x04752160));
            }
            return cache;
        }
        inline app::FtpRequestCreator__Class* get_class() {
            return il2cpp::get_class<app::FtpRequestCreator__Class>(type_info(), "System.Net", "FtpRequestCreator");
        }
        inline app::FtpRequestCreator* create() {
            return il2cpp::create_object<app::FtpRequestCreator>(get_class());
        }
    } // namespace FtpRequestCreator
} // namespace app::classes::types
