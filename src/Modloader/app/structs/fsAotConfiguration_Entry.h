#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsAotConfiguration_Entry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsAotConfiguration_Entry_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotConfiguration_Entry_DEFINED)
#include <Modloader/app/structs/fsAotConfiguration_AotState__Enum.h>
#if defined(IL2CPP_STRUCT_fsAotConfiguration_AotState__Enum_DEFINED)
#define IL2CPP_STRUCT_fsAotConfiguration_Entry_DEFINED
struct String;
struct fsAotConfiguration_Entry {
    fsAotConfiguration_AotState__Enum State;

    struct String* FullTypeName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsAotConfiguration_Entry_FWDDECL)
#define IL2CPP_STRUCT_fsAotConfiguration_Entry_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_fsAotConfiguration_Entry_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotConfiguration_Entry_DEFINED) && !defined(IL2CPP_STRUCT_fsAotConfiguration_Entry_FWDDECL)
#include <Modloader/app/structs/fsAotConfiguration_Entry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsAotConfiguration_Entry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
