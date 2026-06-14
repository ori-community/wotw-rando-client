#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharConverter_DEFINED)
#define IL2CPP_STRUCT_CharConverter_DEFINED
struct CharConverter__Class;
struct CharConverter {
    struct CharConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CharConverter_FWDDECL)
#define IL2CPP_STRUCT_CharConverter_FWDDECL
#include <Modloader/app/structs/CharConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_CharConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharConverter_DEFINED) && !defined(IL2CPP_STRUCT_CharConverter_FWDDECL)
#include <Modloader/app/structs/CharConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
