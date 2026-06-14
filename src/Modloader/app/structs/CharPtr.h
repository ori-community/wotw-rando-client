#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharPtr_DEFINED)
#define IL2CPP_STRUCT_CharPtr_DEFINED
struct CharPtr__Class;
struct CharPtr {
    struct CharPtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CharPtr_FWDDECL)
#define IL2CPP_STRUCT_CharPtr_FWDDECL
#include <Modloader/app/structs/CharPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_CharPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharPtr_DEFINED) && !defined(IL2CPP_STRUCT_CharPtr_FWDDECL)
#include <Modloader/app/structs/CharPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
