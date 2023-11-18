#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Label_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Label_INITIALIZING
#if !defined(IL2CPP_STRUCT_Label_DEFINED)
#define IL2CPP_STRUCT_Label_DEFINED
struct Label {
    int32_t label;
};
#endif
#if !defined(IL2CPP_STRUCT_Label_FWDDECL)
#define IL2CPP_STRUCT_Label_FWDDECL
#endif
#undef IL2CPP_STRUCT_Label_INITIALIZING
#if !defined(IL2CPP_STRUCT_Label_DEFINED) && !defined(IL2CPP_STRUCT_Label_FWDDECL)
#include <Modloader/app/structs/Label.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Label.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
