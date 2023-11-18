#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinHexDecoder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinHexDecoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinHexDecoder_DEFINED)
#include <Modloader/app/structs/BinHexDecoder__Fields.h>
#if defined(IL2CPP_STRUCT_BinHexDecoder__Fields_DEFINED)
#define IL2CPP_STRUCT_BinHexDecoder_DEFINED
struct BinHexDecoder__Class;
struct BinHexDecoder {
    struct BinHexDecoder__Class* klass;
    MonitorData* monitor;
    struct BinHexDecoder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinHexDecoder_FWDDECL)
#define IL2CPP_STRUCT_BinHexDecoder_FWDDECL
#include <Modloader/app/structs/BinHexDecoder__Class.h>
#endif
#undef IL2CPP_STRUCT_BinHexDecoder_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinHexDecoder_DEFINED) && !defined(IL2CPP_STRUCT_BinHexDecoder_FWDDECL)
#include <Modloader/app/structs/BinHexDecoder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinHexDecoder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
