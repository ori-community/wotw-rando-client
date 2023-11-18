#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryCommunicator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryCommunicator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCommunicator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryCommunicator__StaticFields_DEFINED
struct String;
struct MoonTelemetryCommunicator;
struct Dictionary_2_System_Int32_System_Threading_Thread_;
struct MoonTelemetryCommunicator__StaticFields {
    struct String* s_webServerUrl;
    struct MoonTelemetryCommunicator* s_instance;
    struct Dictionary_2_System_Int32_System_Threading_Thread_* s_requestThreads;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryCommunicator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryCommunicator__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Threading_Thread_.h>
#include <Modloader/app/structs/MoonTelemetryCommunicator.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryCommunicator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCommunicator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryCommunicator__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryCommunicator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryCommunicator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
