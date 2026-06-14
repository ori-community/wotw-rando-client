#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Archive__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Archive__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Archive__Fields_DEFINED)
#define IL2CPP_STRUCT_Archive__Fields_DEFINED
struct MemoryStream;
struct BinaryReader;
struct BinaryWriter;
struct __declspec(align(8)) Archive__Fields {
    struct MemoryStream* m_memoryStream;
    struct BinaryReader* m_binaryReader;
    struct BinaryWriter* m_binaryWriter;
    bool m_write;
};
#endif
#if !defined(IL2CPP_STRUCT_Archive__Fields_FWDDECL)
#define IL2CPP_STRUCT_Archive__Fields_FWDDECL
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/MemoryStream.h>
#endif
#undef IL2CPP_STRUCT_Archive__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Archive__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Archive__Fields_FWDDECL)
#include <Modloader/app/structs/Archive__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Archive__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
