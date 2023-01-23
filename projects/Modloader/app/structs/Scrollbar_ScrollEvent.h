#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Scrollbar_ScrollEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Scrollbar_ScrollEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scrollbar_ScrollEvent_DEFINED)
#include <Modloader/app/structs/Scrollbar_ScrollEvent__Fields.h>
#if defined(IL2CPP_STRUCT_Scrollbar_ScrollEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_Scrollbar_ScrollEvent_DEFINED
struct Scrollbar_ScrollEvent__Class;
struct Scrollbar_ScrollEvent {
    struct Scrollbar_ScrollEvent__Class* klass;
    MonitorData* monitor;
    struct Scrollbar_ScrollEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Scrollbar_ScrollEvent_FWDDECL)
#define IL2CPP_STRUCT_Scrollbar_ScrollEvent_FWDDECL
#include <Modloader/app/structs/Scrollbar_ScrollEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_Scrollbar_ScrollEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scrollbar_ScrollEvent_DEFINED) && !defined(IL2CPP_STRUCT_Scrollbar_ScrollEvent_FWDDECL)
#include <Modloader/app/structs/Scrollbar_ScrollEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Scrollbar_ScrollEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
