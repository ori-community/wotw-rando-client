#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndOfStreamException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndOfStreamException_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndOfStreamException_DEFINED)
#include <Modloader/app/structs/EndOfStreamException__Fields.h>
#if defined(IL2CPP_STRUCT_EndOfStreamException__Fields_DEFINED)
#define IL2CPP_STRUCT_EndOfStreamException_DEFINED
struct EndOfStreamException__Class;
struct EndOfStreamException {
    struct EndOfStreamException__Class* klass;
    MonitorData* monitor;
    struct EndOfStreamException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EndOfStreamException_FWDDECL)
#define IL2CPP_STRUCT_EndOfStreamException_FWDDECL
#include <Modloader/app/structs/EndOfStreamException__Class.h>
#endif
#undef IL2CPP_STRUCT_EndOfStreamException_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndOfStreamException_DEFINED) && !defined(IL2CPP_STRUCT_EndOfStreamException_FWDDECL)
#include <Modloader/app/structs/EndOfStreamException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndOfStreamException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
