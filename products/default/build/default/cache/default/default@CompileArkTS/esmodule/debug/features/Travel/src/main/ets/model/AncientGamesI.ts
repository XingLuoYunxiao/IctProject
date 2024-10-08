import type { Icon } from "./interface/IconInterface";
export class AncientGames implements Icon {
    img: Resource;
    id: string;
    path: string;
    constructor(img: Resource, id: string, path: string) {
        this.img = img;
        this.id = id;
        this.path = path;
    }
}
export function tsetAncientGamesIArr(): AncientGames[] {
    let masterPiceIArr: AncientGames[] = [
        new AncientGames({ "id": 33554535, "type": 20000, params: [], "bundleName": "com.example.ictproject", "moduleName": "default" }, '飞花令', 'FlyingFlowerOrderPage'),
        new AncientGames({ "id": 33554535, "type": 20000, params: [], "bundleName": "com.example.ictproject", "moduleName": "default" }, '页面2', ''),
        new AncientGames({ "id": 33554535, "type": 20000, params: [], "bundleName": "com.example.ictproject", "moduleName": "default" }, '页面3', ''),
        new AncientGames({ "id": 33554535, "type": 20000, params: [], "bundleName": "com.example.ictproject", "moduleName": "default" }, '页面4', ''),
        new AncientGames({ "id": 33554535, "type": 20000, params: [], "bundleName": "com.example.ictproject", "moduleName": "default" }, '页面5', ''),
        new AncientGames({ "id": 33554535, "type": 20000, params: [], "bundleName": "com.example.ictproject", "moduleName": "default" }, '页面6', ''),
    ];
    return masterPiceIArr;
}
