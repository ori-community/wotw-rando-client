#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DurationControl_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DurationControl_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_DurationControl_t_DEFINED)
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/EDurationControlNotification__Enum.h>
#include <Modloader/app/structs/EDurationControlProgress__Enum.h>
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_AppId_t_DEFINED) && defined(IL2CPP_STRUCT_EDurationControlProgress__Enum_DEFINED) && defined(IL2CPP_STRUCT_EDurationControlNotification__Enum_DEFINED)
#define IL2CPP_STRUCT_DurationControl_t_DEFINED
struct DurationControl_t {
    EResult__Enum m_eResult;

    struct AppId_t m_appid;
    bool m_bApplicable;
    int32_t m_csecsLast5h;
    EDurationControlProgress__Enum m_progress;

    EDurationControlNotification__Enum m_notification;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DurationControl_t_FWDDECL)
#define IL2CPP_STRUCT_DurationControl_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_DurationControl_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_DurationControl_t_DEFINED) && !defined(IL2CPP_STRUCT_DurationControl_t_FWDDECL)
#include <Modloader/app/structs/DurationControl_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DurationControl_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
