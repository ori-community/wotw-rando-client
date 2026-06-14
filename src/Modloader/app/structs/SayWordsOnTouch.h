#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SayWordsOnTouch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SayWordsOnTouch_INITIALIZING
#if !defined(IL2CPP_STRUCT_SayWordsOnTouch_DEFINED)
#include <Modloader/app/structs/SayWordsOnTouch__Fields.h>
#if defined(IL2CPP_STRUCT_SayWordsOnTouch__Fields_DEFINED)
#define IL2CPP_STRUCT_SayWordsOnTouch_DEFINED
struct SayWordsOnTouch__Class;
struct SayWordsOnTouch {
    struct SayWordsOnTouch__Class* klass;
    MonitorData* monitor;
    struct SayWordsOnTouch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SayWordsOnTouch_FWDDECL)
#define IL2CPP_STRUCT_SayWordsOnTouch_FWDDECL
#include <Modloader/app/structs/SayWordsOnTouch__Class.h>
#endif
#undef IL2CPP_STRUCT_SayWordsOnTouch_INITIALIZING
#if !defined(IL2CPP_STRUCT_SayWordsOnTouch_DEFINED) && !defined(IL2CPP_STRUCT_SayWordsOnTouch_FWDDECL)
#include <Modloader/app/structs/SayWordsOnTouch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SayWordsOnTouch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
