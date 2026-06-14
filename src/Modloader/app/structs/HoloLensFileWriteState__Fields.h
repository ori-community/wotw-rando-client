#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HoloLensFileWriteState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HoloLensFileWriteState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoloLensFileWriteState__Fields_DEFINED)
#define IL2CPP_STRUCT_HoloLensFileWriteState__Fields_DEFINED
struct FileStream;
struct __declspec(align(8)) HoloLensFileWriteState__Fields {
    struct FileStream* _Stream_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_HoloLensFileWriteState__Fields_FWDDECL)
#define IL2CPP_STRUCT_HoloLensFileWriteState__Fields_FWDDECL
#include <Modloader/app/structs/FileStream.h>
#endif
#undef IL2CPP_STRUCT_HoloLensFileWriteState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoloLensFileWriteState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HoloLensFileWriteState__Fields_FWDDECL)
#include <Modloader/app/structs/HoloLensFileWriteState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HoloLensFileWriteState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
